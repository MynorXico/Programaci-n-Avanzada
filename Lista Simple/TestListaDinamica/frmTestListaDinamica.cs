using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TestListaDinamica
{
    public partial class frmListaDinamica : Form
    {
        
        ListaEnlazadaManejada listaEnlazadaManejada = null;

        public frmListaDinamica()
        {
            InitializeComponent();
        }

        private void MostrarMensajeError(Exception ex)
        {
            MessageBox.Show(ex.Message, "Error del sistema", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void btnInstanciar_Click(object sender, EventArgs e)
        {
            try
            {
                
                listaEnlazadaManejada = new ListaEnlazadaManejada();
            }
            catch (Exception ex)
            {
                MostrarMensajeError(ex);
            }
        }

        private void btnAgregar_Click(object sender, EventArgs e)
        {
            try
            {
                int numeroPorAñadir = 0;

                if(Int32.TryParse(txtAgregar.Text, out numeroPorAñadir))
                {
                    listaEnlazadaManejada.Agregar(numeroPorAñadir);
                }
                else
                {
                    throw new Exception("El número ingresado no es un entero válido.");
                }
            }
            catch (Exception ex)
            {
                MostrarMensajeError(ex);
            }
        }

        private void btnObtenerLongitud_Click(object sender, EventArgs e)
        {
            try
            {
                MessageBox.Show(string.Format("Hay {0} elementos ingresados en la lista", listaEnlazadaManejada.ObtenerLongitud()), "Longitud");
            }
            catch (Exception ex)
            {
                MostrarMensajeError(ex);
            }
        }

        private void btnObtenerEnPosicion_Click(object sender, EventArgs e)
        {
            try
            {
                int posicionPorObtener = 0;

                if (Int32.TryParse(txtObtenerEnPosicion.Text, out posicionPorObtener))
                {
                    MessageBox.Show(string.Format("La posicion {0} contiene el elemento {1}", posicionPorObtener, listaEnlazadaManejada.ObtenerEnPosicion(posicionPorObtener)), "Resultado");
                }
                else
                {
                    throw new Exception("El número ingresado no es un entero válido.");
                }
            }
            catch (Exception ex)
            {
                MostrarMensajeError(ex);
            }
        }

        private void btnEliminarEnPosicion_Click(object sender, EventArgs e)
        {
            try
            {
                int posicionPorEliminar = 0;

                if (Int32.TryParse(txtEliminarEnPosicion.Text, out posicionPorEliminar))
                {
                    listaEnlazadaManejada.EliminarEnPosicion(posicionPorEliminar);
                }
                else
                {
                    throw new Exception("El número ingresado no es un entero válido.");
                }
            }
            catch (Exception ex)
            {
                MostrarMensajeError(ex);
            }
        }

        private void btnVerLista_Click(object sender, EventArgs e)
        {
            try
            {
                MessageBox.Show(string.Format("La lista contiene: {0}", listaEnlazadaManejada.VerLista()), "Lista");
            }
            catch (Exception ex)
            {
                MostrarMensajeError(ex);
            }
        }

        private void frmListaDinamica_Load(object sender, EventArgs e)
        {

        }
    }
}
